# To support layered ipk generation

DISTRO = "rdk"

MIDDLEWARE_ARCH = "${MACHINE}-middleware"
PACKAGE_EXTRA_ARCHS:append = " ${MIDDLEWARE_ARCH}"

# See release note for configuration details.
RDK_ARTIFACTS_BASE_URL ?= ""

RELEASE_NUM = "2.10.0"
MW_IPK_PATH = "middleware-release/${RELEASE_NUM}"
MW_IPK_SERVER_PATH = "${RDK_ARTIFACTS_BASE_URL}/${MW_IPK_PATH}/${MACHINE}/ipks/${BUILD_VARIANT}"

IPK_FEED_URIS += " \
                ${MIDDLEWARE_ARCH}##${MW_IPK_SERVER_PATH} "
