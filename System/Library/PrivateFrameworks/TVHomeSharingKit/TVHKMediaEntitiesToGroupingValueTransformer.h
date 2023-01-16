//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesToGroupingValueTransformer : NSValueTransformer
{
    _Bool _performDefaultGroupsSort;	// 8 = 0x8
    _Bool _generateGroupingIndexBarItems;	// 9 = 0x9
    NSString *_identifierKeyPath;	// 16 = 0x10
    NSValueTransformer *_identifierTitleTransformer;	// 24 = 0x18
    CDUnknownBlockType _groupsSortComparator;	// 32 = 0x20
    NSString *_mediaEntitiesIndexBarItemPropertyKey;	// 40 = 0x28
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x0060000000002bec
+ (Class)transformedValueClass;	// IMP=0x0060000000002bdb
- (void).cxx_destruct;	// IMP=0x000000000000353d
@property(nonatomic) _Bool generateGroupingIndexBarItems; // @synthesize generateGroupingIndexBarItems=_generateGroupingIndexBarItems;
@property(copy, nonatomic) NSString *mediaEntitiesIndexBarItemPropertyKey; // @synthesize mediaEntitiesIndexBarItemPropertyKey=_mediaEntitiesIndexBarItemPropertyKey;
@property(nonatomic) _Bool performDefaultGroupsSort; // @synthesize performDefaultGroupsSort=_performDefaultGroupsSort;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(retain, nonatomic) NSValueTransformer *identifierTitleTransformer; // @synthesize identifierTitleTransformer=_identifierTitleTransformer;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000002bf4
- (id)initWithIdentifierKeyPath:(id)arg1;	// IMP=0x0000000000002b2a
- (id)init;	// IMP=0x0000000000002abb

@end
