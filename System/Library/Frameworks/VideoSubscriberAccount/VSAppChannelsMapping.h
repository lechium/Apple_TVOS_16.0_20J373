//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VSAppChannelsMapping : NSObject
{
    NSString *_appAdamID;	// 8 = 0x8
    NSArray *_channelIDs;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000003d05e
- (void).cxx_destruct;	// IMP=0x000000000003d216
@property(copy, nonatomic) NSArray *channelIDs; // @synthesize channelIDs=_channelIDs;
@property(copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
- (id)description;	// IMP=0x000000000003d19f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003d145
- (unsigned long long)hash;	// IMP=0x000000000003d10c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d0bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003d066
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003cfde
- (id)init;	// IMP=0x000000000003cf7a

@end

