#include <mod/amlmod.h>
MYMOD(net.rusjj.myfirstmod, My First Mod, 1.0, RusJJ)
BEGIN_DEPLIST()
END_DEPLIST()
extern "C" void OnModLoad() {
    logger->Info("Hello! My first AML Mod is working!");
}
