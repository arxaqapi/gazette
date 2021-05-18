# gazette
📰 Header-only C++ logging library

## Usage
```c++
#include "log.h"

int main(void)
{
    LOG("This will log a simple message");
    LOG_OK("Logging succesfull !");
    LOG_ERR("Aaand another error ...");
    return 0;
}
```
