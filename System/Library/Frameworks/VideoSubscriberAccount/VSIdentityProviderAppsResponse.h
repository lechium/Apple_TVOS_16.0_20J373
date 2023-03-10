//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAppsResponse : NSObject
{
    NSArray *_providerAppAdamIDs;	// 8 = 0x8
    NSArray *_channelMappings;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000006ce59
- (void).cxx_destruct;	// IMP=0x000000000006d011
@property(copy, nonatomic) NSArray *channelMappings; // @synthesize channelMappings=_channelMappings;
@property(copy, nonatomic) NSArray *providerAppAdamIDs; // @synthesize providerAppAdamIDs=_providerAppAdamIDs;
- (id)description;	// IMP=0x000000000006cf9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006cf40
- (unsigned long long)hash;	// IMP=0x000000000006cf07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006ceb7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ce61
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006cdd9
- (id)init;	// IMP=0x000000000006cd75

@end

