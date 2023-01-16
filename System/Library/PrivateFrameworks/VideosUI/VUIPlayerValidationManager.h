//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VUIPlayerValidationManager : NSObject
{
    NSMapTable *_playerCounts;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000009da17
- (void).cxx_destruct;	// IMP=0x000000000009de00
@property(retain, nonatomic) NSMapTable *playerCounts; // @synthesize playerCounts=_playerCounts;
- (void)removeReferenceForPlayer:(id)arg1;	// IMP=0x000000000009dc12
- (void)addReferenceForPlayer:(id)arg1;	// IMP=0x000000000009daf0
- (id)_init;	// IMP=0x000000000009da8a
- (id)init;	// IMP=0x000000000009da7c

@end
