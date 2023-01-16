//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FamilyInfoLookupResult : NSObject
{
    _Bool _cached;	// 8 = 0x8
    NSArray *_familyMembers;	// 16 = 0x10
}

+ (id)_familyMembersFromDictionaryRepresentation:(id)arg1;	// IMP=0x0040000000138c8f
- (void).cxx_destruct;	// IMP=0x002000000013947d
@property(readonly, nonatomic) NSArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property(readonly, nonatomic, getter=isCached) _Bool cached; // @synthesize cached=_cached;
- (id)description;	// IMP=0x0010000000138c0d
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 cached:(_Bool)arg2;	// IMP=0x0010000000138933

@end
