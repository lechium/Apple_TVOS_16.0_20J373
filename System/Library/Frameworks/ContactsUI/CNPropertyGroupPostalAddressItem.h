//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNPostalAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupPostalAddressItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008a317
- (id)bestValue:(id)arg1;	// IMP=0x000000000008b143
- (_Bool)_isMinimalAddress:(id)arg1;	// IMP=0x000000000008b10d
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;	// IMP=0x000000000008a9ae
- (id)defaultActionURL;	// IMP=0x000000000008a7e3
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008a43c
- (id)normalizedValue;	// IMP=0x000000000008a380
@property(readonly, nonatomic) CNPostalAddress *address;

@end

