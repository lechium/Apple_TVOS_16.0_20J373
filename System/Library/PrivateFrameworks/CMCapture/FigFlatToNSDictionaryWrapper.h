//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface FigFlatToNSDictionaryWrapper : NSDictionary
{
    struct OpaqueFigFlatDictionary *_flatDictionary;	// 8 = 0x8
    struct OpaqueFigFlatDictionaryKeySpec *_keySpec;	// 16 = 0x10
    int _keySpace;	// 24 = 0x18
    void *_dictionaryBacking;	// 32 = 0x20
    void *_exportedKeySpec;	// 40 = 0x28
    CDUnknownBlockType _deallocatorBlock;	// 48 = 0x30
    struct os_unfair_lock_s _lazyInitializationMutex;	// 56 = 0x38
}

- (id)keyEnumerator;	// IMP=0x0000000000037190
- (id)objectForKey:(id)arg1;	// IMP=0x000000000003672d
- (unsigned long long)count;	// IMP=0x00000000000366fe
- (void)dealloc;	// IMP=0x000000000003665b
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000036559
- (id)initLazilyWithFlatDictionaryBacking:(void *)arg1 exportedKeySpec:(void *)arg2 deallocatorBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000364b4
- (id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary *)arg1 keySpec:(struct OpaqueFigFlatDictionaryKeySpec *)arg2;	// IMP=0x0000000000036414

@end
