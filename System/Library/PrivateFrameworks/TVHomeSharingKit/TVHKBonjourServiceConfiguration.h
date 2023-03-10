//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKBonjourServiceConfiguration : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_serviceType;	// 16 = 0x10
    NSString *_serviceDomain;	// 24 = 0x18
}

+ (id)new;	// IMP=0x0010000000060a1b
- (void).cxx_destruct;	// IMP=0x00000000000610b2
@property(copy, nonatomic) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000061030
- (id)description;	// IMP=0x0000000000060f1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000060ca4
- (unsigned long long)hash;	// IMP=0x0000000000060b9f
- (id)initWithServiceName:(id)arg1 serviceTyoe:(id)arg2 serviceDomain:(id)arg3;	// IMP=0x0000000000060ab9
- (id)init;	// IMP=0x0000000000060a4a

@end

