virtual unsigned int iteratorSize();
virtual bool initIterator(void * iterationContext);
virtual bool getNextObjectForIterator(void * iterationContext,OSObject ** nextObject);
virtual bool init();
virtual unsigned int getCount();
virtual unsigned int getCapacity();
virtual unsigned int getCapacityIncrement();
virtual unsigned int setCapacityIncrement(unsigned increment);
virtual unsigned int ensureCapacity(unsigned int newCapacity);
virtual void flushCollection();
virtual unsigned setOptions(unsigned options,unsigned   mask,void * context);
OSCollection * copyCollection(OSDictionary * cycleDict);
virtual const OSMetaClass * getMetaClass();
virtual bool isEqualTo(OSMetaClassBase *col);