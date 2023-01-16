//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKPlayerActivityRelationshipBase
{
    NSString *_name;	// 8 = 0x8
    NSString *_image;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

+ (id)secureCodedPropertyKeys;	// IMP=0x004000000008ebd9
- (void).cxx_destruct;	// IMP=0x002000000008ef11
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x001000000008ede5
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000008ecd3

@end

