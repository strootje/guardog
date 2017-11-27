from conan.packager import ConanMultiPackager

if __name__ == "__main__":
	builder = ConanMultiPackager(args = "-tf ./tests/PackageTest --build missing")
	builder.add_common_builds()
	builder.run()
