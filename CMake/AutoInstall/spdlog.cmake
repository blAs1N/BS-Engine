cmake_minimum_required (VERSION 3.10)
project (${name}-download NONE)
include (ExternalProject)

ExternalProject_Add (${name}-download
	GIT_REPOSITORY		https://github.com/gabime/spdlog
	GIT_TAG				1.8.5
	GIT_SHALLOW			TRUE
	GIT_PROGRESS		TRUE
	SOURCE_DIR			"${src_dir}"
	BINARY_DIR			"${build_dir}"
	CONFIGURE_COMMAND	""
	BUILD_COMMAND		""
	INSTALL_COMMAND		""
	TEST_COMMAND		""
)
