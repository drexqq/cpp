class File {
	FILE* m_fd;
public:
	bool open(char* path, char* opt="rb") {
		return (m_fd=fopen(path, opt)) != 0;
	}

	void close() {
		if (m_fd)
			fclose(m_fd);
	}

	bool read(char* buf, int len) {
		return fread(buf, 1, len, m_fd) == len;
	}

	bool write(char* buf, int len) {
		return fwrite(buf, 1, len, m_fd);
	}

	bool seek(int offset, int origin) {
		return fseek(m_fd, offset, origin) == 0;
	}

	int size() {
		seek(0, SEEK_END);
		int l = ftell(m_fd);
		seek(0, SEEK_SET);
		return l;
	}

	static bool dup(char* src, char* dst) {
		File fd = File();
		if (fd.open(src)){
			int file_size = fd.size();
			char* cnt = new char[file_size + 1];
			cnt[file_size] = 0;
			fd.read(cnt, file_size);
			fd.close();
			File _dup = File();
			if (_dup.open(dst, "wb")) {
				_dup.write(cnt, strlen(cnt));
				_dup.close();
				return 1;
			}
			return 1;
		}
		return 0;
	}

	static bool is_exist(char* path) {
		File fd;
		if (fd.open(path)) {
			fd.close();
			return 1;
		} else {
			return 0;
		}
	}

	void flush() { fflush(m_fd); }
};
