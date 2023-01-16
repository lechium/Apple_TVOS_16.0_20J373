//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityCollection.h"

@class NSString, TVHKMediaEntityIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPGroupsMediaEntityCollection : TVHKMediaEntityCollection
{
    NSString *_imageIdentifier;	// 8 = 0x8
    TVHKMediaEntityType *_type;	// 16 = 0x10
    TVHKMediaEntityIdentifier *_artistIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ad8b6
- (id)type;	// IMP=0x00000000000ad8a5
- (id)artistIdentifier;	// IMP=0x00000000000ad77d
- (id)imageIdentifier;	// IMP=0x00000000000ad6c6
- (id)initWithMediaCategoryType:(unsigned long long)arg1 mediaEntityCollectionType:(unsigned long long)arg2 mediaServerIdentifier:(id)arg3 requestedProperties:(id)arg4 entity:(id)arg5;	// IMP=0x00000000000ad5cb
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x00000000000ad55c

@end

