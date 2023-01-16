//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SecMockAKS : NSObject
{
}

+ (void)updateOperationsUntilUnlock;	// IMP=0x0040000000050033
+ (void)setOperationsUntilUnlock:(int)arg1;	// IMP=0x0040000000050027
+ (id)popDecryptRefKeyFailure;	// IMP=0x004000000004ff85
+ (void)resetDecryptRefKeyFailures;	// IMP=0x004000000004ff3d
+ (void)failNextDecryptRefKey:(id)arg1;	// IMP=0x004000000004fe83
+ (void)unlockAllClasses;	// IMP=0x004000000004fe13
+ (void)lockClassA_C;	// IMP=0x004000000004fda3
+ (void)lockClassA;	// IMP=0x004000000004fd33
+ (_Bool)useGenerationCount;	// IMP=0x004000000004fd2b
+ (_Bool)isSEPDown;	// IMP=0x004000000004fd23
+ (_Bool)forceUnwrapKeyDecodeFailure;	// IMP=0x004000000004fd1b
+ (_Bool)forceInvalidPersona;	// IMP=0x004000000004fd13
+ (_Bool)isLocked:(int)arg1;	// IMP=0x004000000004fc3e
+ (void)reset;	// IMP=0x004000000004fbce
+ (void)setKeybag_state:(unsigned int)arg1;	// IMP=0x004000000004fbc2
+ (unsigned int)keybag_state;	// IMP=0x004000000004fbb6
+ (id)mutabilityQueue;	// IMP=0x004000000004fb86
+ (id)lockedStates;	// IMP=0x004000000004fb39
+ (void)trapdoor;	// IMP=0x004000000004fb15

@end
