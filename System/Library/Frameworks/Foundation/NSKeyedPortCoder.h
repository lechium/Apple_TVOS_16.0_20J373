//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSKeyedPortCoder
{
    id sndPort;	// 16 = 0x10
    id rcvPort;	// 24 = 0x18
    NSMutableDictionary *root;	// 32 = 0x20
    NSMutableArray *containers;	// 40 = 0x28
    NSMutableArray *components;	// 48 = 0x30
    _Bool mainDataFinished;	// 56 = 0x38
    unsigned long long nextGenericIndex;	// 64 = 0x40
    unsigned long long nextOutOfLineGenericIndex;	// 72 = 0x48
    _Bool isBycopy;	// 80 = 0x50
    _Bool isByref;	// 81 = 0x51
    _Bool isValid;	// 82 = 0x52
    NSMutableArray *importedObjects;	// 88 = 0x58
}

- (void)decodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f53c3
- (void)encodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f5289
- (id)decodeInvocation;	// IMP=0x00000000005f509d
- (void)encodeInvocation:(id)arg1;	// IMP=0x00000000005f4fb9
- (id)decodeObject;	// IMP=0x00000000005f4fa7
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;	// IMP=0x00000000005f4f7b
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;	// IMP=0x00000000005f4f64
- (id)decodePortObject;	// IMP=0x00000000005f4f50
- (id)decodeDataObject;	// IMP=0x00000000005f4f3c
- (id)_decodeObjectNoKey;	// IMP=0x00000000005f4f28
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000005f4f13
- (void)encodeConditionalObject:(id)arg1;	// IMP=0x00000000005f4eff
- (void)encodeObject:(id)arg1;	// IMP=0x00000000005f4eed
- (void)encodeByrefObject:(id)arg1;	// IMP=0x00000000005f4e98
- (void)encodeBycopyObject:(id)arg1;	// IMP=0x00000000005f4e43
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x00000000005f4e2e
- (void)encodePortObject:(id)arg1;	// IMP=0x00000000005f4e1a
- (void)encodeDataObject:(id)arg1;	// IMP=0x00000000005f4e06
- (void)_encodeObjectNoKey:(id)arg1;	// IMP=0x00000000005f4df2
- (void)_setByref:(_Bool)arg1;	// IMP=0x00000000005f4de2
- (void)_setBycopy:(_Bool)arg1;	// IMP=0x00000000005f4dd2
- (long long)versionForClassName:(id)arg1;	// IMP=0x00000000005f4da4
- (id)decodePortObjectForKey:(id)arg1;	// IMP=0x00000000005f4d92
- (id)decodeDataObjectForKey:(id)arg1;	// IMP=0x00000000005f4d80
- (id)_getOutOfLineObjectForKey:(id)arg1;	// IMP=0x00000000005f4c8f
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;	// IMP=0x00000000005f4c09
- (long long)decodeIntegerForKey:(id)arg1;	// IMP=0x00000000005f4bde
- (double)decodeDoubleForKey:(id)arg1;	// IMP=0x00000000005f4b26
- (float)decodeFloatForKey:(id)arg1;	// IMP=0x00000000005f4a6e
- (long long)decodeInt64ForKey:(id)arg1;	// IMP=0x00000000005f49b8
- (int)decodeInt32ForKey:(id)arg1;	// IMP=0x00000000005f4903
- (int)decodeIntForKey:(id)arg1;	// IMP=0x00000000005f484e
- (_Bool)decodeBoolForKey:(id)arg1;	// IMP=0x00000000005f4825
- (id)_decodePropertyListForKey:(id)arg1;	// IMP=0x00000000005f4813
- (id)decodeObjectForKey:(id)arg1;	// IMP=0x00000000005f4498
- (id)_getObjectFromTopForKey:(id)arg1;	// IMP=0x00000000005f4427
- (_Bool)containsValueForKey:(id)arg1;	// IMP=0x00000000005f43f1
- (void)encodePortObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f43df
- (void)encodeDataObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f43cd
- (void)_addOutOfLineObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f4296
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x00000000005f41c4
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000005f417d
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x00000000005f40ff
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x00000000005f4081
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000005f4001
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3f82
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3f03
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3eda
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3ea6
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3e94
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3b90
- (void)_finishUpObject;	// IMP=0x00000000005f3b73
- (void)_prepareToEncodeObjectForKey:(id)arg1;	// IMP=0x00000000005f3b0e
- (_Bool)allowsKeyedCoding;	// IMP=0x00000000005f3b06
- (void)_addObjectToTop:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000005f3a3e
- (id)_topContainer;	// IMP=0x00000000005f3a21
- (void)importObject:(id)arg1;	// IMP=0x00000000005f39d4
- (id)importedObjects;	// IMP=0x00000000005f39c3
- (_Bool)isByref;	// IMP=0x00000000005f39b3
- (_Bool)isBycopy;	// IMP=0x00000000005f39a3
- (id)_proxyForLocalObject:(id)arg1;	// IMP=0x00000000005f393f
- (id)connection;	// IMP=0x00000000005f390d
- (id)finishedComponents;	// IMP=0x00000000005f38d8
- (void)dispatch;	// IMP=0x00000000005f3855
- (void)_buildMainData;	// IMP=0x00000000005f373f
- (id)debugDescription;	// IMP=0x00000000005f367e
- (void)invalidate;	// IMP=0x00000000005f3604
- (void)dealloc;	// IMP=0x00000000005f3550
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;	// IMP=0x00000000005f330f

@end

