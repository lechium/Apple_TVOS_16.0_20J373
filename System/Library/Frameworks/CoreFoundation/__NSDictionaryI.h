//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSDictionary.h"

__attribute__((visibility("hidden")))
@interface __NSDictionaryI : NSDictionary
{
    unsigned int _used:57;	// 8 = 0x8
    unsigned int _copyKeys:1;	// 15 = 0xf
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000334e4
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000032933
- (double)_clumpingInterestingThreshold;	// IMP=0x0000000000033d48
- (double)_clumpingFactor;	// IMP=0x0000000000033b1c
- (id)_cfMutableCopy;	// IMP=0x0000000000033ad5
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033ad0
- (id)mutableCopy;	// IMP=0x00000000000339d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000339cb
- (id)copy;	// IMP=0x00000000000339c6
- (void)dealloc;	// IMP=0x00000000000338f4
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000000000333b0
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000003302b
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032cfb
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032aa4
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000032a08
- (void)__apply:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000032936
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000003286c
- (id)keyEnumerator;	// IMP=0x0000000000032836
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000032702
- (unsigned long long)count;	// IMP=0x00000000000326ec

@end

