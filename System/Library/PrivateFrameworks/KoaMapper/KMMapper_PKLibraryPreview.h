//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVPodcastItemBuilder, NSString;

@interface KMMapper_PKLibraryPreview : NSObject
{
    KVPodcastItemBuilder *_builder;	// 8 = 0x8
}

+ (Class)externalObjectClass;	// IMP=0x001000000000222b
- (void).cxx_destruct;	// IMP=0x000000000000221b
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002213
- (long long)targetItemType;	// IMP=0x0000000000002208
- (id)init;	// IMP=0x00000000000021b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

