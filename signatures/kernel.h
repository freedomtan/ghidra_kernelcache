typedef u64 vm_size_t;
int _memcmp(const void *s1, const void *s2, size_t ssize);
void * _memcpy(void *dst, void *src, size_t ssize);
void * _memmove(void *dst, void *src, size_t ssize);
void * ___memcpy_chk(void *dst, void *src, size_t ssize,size_t max);
void _IOFreeAligned(void *address, vm_size_t size);
void _IOFree(void *address, vm_size_t size);
void * _IOLockAlloc(void);
void _IOLockFree(void *lock);
void _IOLockLock(IOLock *locks);
void _bzero(void *, size_t);
void * _IOMallocAligned(vm_size_t size, vm_offset_t alignment);
void * _IOMalloc(vm_size_t size);
void _IORecursiveLockUnlock(void *lock);
void _IOLockUnlock(void *lock);	
void _IORecursiveLockLock(void *lock);
void _IORWLockRead(void *lock);
void _IORWLockWrite(void *lock);
void _IORWLockUnlock(void *lock);
void * _IOSimpleLockAlloc(void);
void _IOSimpleLockDestroy(void *lock);
void _IOSimpleLockFree(void *lock);
void _IOSimpleLockLock(void *lock);
void _IOSimpleLockInit(void *lock);
void * _IOSimpleLockGetMachLock(void *lock);
uint _IOSimpleLockLockDisableInterrupt(void *lock);
bool _IOSimpleLockTryLock(void *lock);
virtual IOWorkLoop * getWorkLoop();
virtual IOReturn externalMethod(uint32_t selector, IOExternalMethodArguments *arguments, IOExternalMethodDispatch *dispatch, OSObject *target, void *reference);
virtual IOReturn registerNotificationPort(ipc_port *port, UInt32 type, uint64_t * refCon);
virtual IOReturn clientMemoryForType(UInt32 type, IOOptionBits *options, IOMemoryDescriptor **memory);
virtual IOReturn setProperties(OSDictionary *properties );
//virtual IOExternalMethod * getTargetAndMethodForIndex(IOService **targetP, UInt32 index)
void * _ptmf2ptf(void *this,void *self, void *func);
int _IORecursiveLockSleep(void *_lock, void *event, UInt32 interType);	
void IORecursiveLockWakeup(void *_lock, void *event, bool oneThread);
void * kalloc_canblock (vm_size_t * size, boolean_t canblock, void * site);

