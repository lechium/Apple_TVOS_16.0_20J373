//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSRelationshipStoreMapping
{
    NSString *_destinationEntityExternalName;	// 24 = 0x18
    NSArray *_foreignKeys;	// 32 = 0x20
    NSArray *_joins;	// 40 = 0x28
    unsigned int _joinSemantic;	// 48 = 0x30
}

- (unsigned int)joinSemantic;	// IMP=0x000000000015374d
- (id)joins;	// IMP=0x000000000015373c
- (id)foreignKeys;	// IMP=0x000000000015372b
- (id)destinationEntityExternalName;	// IMP=0x000000000015371a
- (id)relationship;	// IMP=0x0000000000153708
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001535af
- (void)dealloc;	// IMP=0x000000000015348b

@end

