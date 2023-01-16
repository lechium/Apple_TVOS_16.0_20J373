//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, RPCompanionLinkClient, RPCompanionLinkDevice;

@interface BMRapportDevice : NSObject
{
    NSString *_rapportIdentifier;	// 8 = 0x8
    NSString *_bmDeviceIdentifier;	// 16 = 0x10
    RPCompanionLinkDevice *_device;	// 24 = 0x18
    RPCompanionLinkClient *_client;	// 32 = 0x20
    NSMutableArray *_requestQueue;	// 40 = 0x28
    unsigned long long _linkState;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001c787
- (void).cxx_destruct;	// IMP=0x002000000001c91f
@property(nonatomic) unsigned long long linkState; // @synthesize linkState=_linkState;
@property(retain, nonatomic) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
@property(retain, nonatomic) RPCompanionLinkDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *bmDeviceIdentifier; // @synthesize bmDeviceIdentifier=_bmDeviceIdentifier;
@property(readonly, nonatomic) NSString *rapportIdentifier; // @synthesize rapportIdentifier=_rapportIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001c81c
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001c78f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001c768
- (id)description;	// IMP=0x001000000001c651
- (unsigned long long)hash;	// IMP=0x001000000001c60d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001c560
- (void)handleInvalidationWithError:(id)arg1;	// IMP=0x001000000001c26a
- (void)invalidateClientWithError:(id)arg1;	// IMP=0x001000000001c1b6
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) NSArray *serviceTypes;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *shortenedRapportIdentifier;
- (id)initWithRPCompanionLinkDevice:(id)arg1;	// IMP=0x001000000001bf83

@end

