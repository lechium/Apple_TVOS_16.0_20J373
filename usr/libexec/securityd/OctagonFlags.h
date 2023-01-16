//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface OctagonFlags : NSObject
{
    NSMutableDictionary *_flagConditions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableSet *_flags;	// 24 = 0x18
    NSSet *_allowableFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b09b7
@property(readonly) NSSet *allowableFlags; // @synthesize allowableFlags=_allowableFlags;
@property(retain) NSMutableSet *flags; // @synthesize flags=_flags;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *flagConditions; // @synthesize flagConditions=_flagConditions;
- (void)_onqueueRemoveFlag:(id)arg1;	// IMP=0x00100000000b0754
- (void)setFlag:(id)arg1;	// IMP=0x00100000000b06a2
- (id)conditionForFlag:(id)arg1;	// IMP=0x00100000000b061f
- (void)_onqueueSetFlag:(id)arg1;	// IMP=0x00100000000b0587
- (_Bool)_onqueueContains:(id)arg1;	// IMP=0x00100000000b04ea
- (id)dumpFlags;	// IMP=0x00100000000b049a
- (id)contentsAsString;	// IMP=0x00100000000b03cf
- (id)description;	// IMP=0x00100000000b0363
- (id)initWithQueue:(id)arg1 flags:(id)arg2;	// IMP=0x00100000000b00c1

@end
