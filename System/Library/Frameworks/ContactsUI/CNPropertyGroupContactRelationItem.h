//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNContactRelation;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008b3d0
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000008b4a5
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008b490
- (id)normalizedValue;	// IMP=0x000000000008b440
@property(readonly, nonatomic) CNContactRelation *contactRelation;

@end
