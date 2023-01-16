//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKPlayerActivityRelationshipIcon
{
    NSString *_url;	// 32 = 0x20
    long long _platform;	// 40 = 0x28
    NSNumber *_width;	// 48 = 0x30
    NSNumber *_height;	// 56 = 0x38
}

+ (id)secureCodedPropertyKeys;	// IMP=0x004000000008f338
- (void).cxx_destruct;	// IMP=0x002000000008f6df
@property(nonatomic) NSNumber *height; // @synthesize height=_height;
@property(nonatomic) NSNumber *width; // @synthesize width=_width;
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000008f4f0

@end

