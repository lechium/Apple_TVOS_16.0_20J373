//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UISceneHostingGraph : NSObject
{
    NSMutableDictionary *_hostingGraph;	// 8 = 0x8
    NSHashTable *_lazy_contextTrackingAssertions;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00100000006e83bb
- (void).cxx_destruct;	// IMP=0x00000000006e8c8b
- (id)_localWindowGraphHostingContextID:(unsigned int)arg1;	// IMP=0x00000000006e894d
- (void)_noteContextID:(unsigned int)arg1 hostedByWindow:(id)arg2;	// IMP=0x00000000006e86e2
- (id)observeLocalWindowGraphHostingContextID:(unsigned int)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006e84af
- (id)localWindowGraphHostingContextID:(unsigned int)arg1;	// IMP=0x00000000006e8486
- (id)_init;	// IMP=0x00000000006e8420

@end
