//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008b4be
- (_Bool)isEquivalentToItem:(id)arg1;	// IMP=0x000000000008bb46
- (id)editingStringValue;	// IMP=0x000000000008ba64
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000008b984
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008b7d7
- (id)displayLabel;	// IMP=0x000000000008b5ec
- (id)defaultActionURL;	// IMP=0x000000000008b568
@property(readonly, nonatomic) CNSocialProfile *profile;

@end

