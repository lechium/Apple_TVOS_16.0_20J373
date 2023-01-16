//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLHarvestDataAccessPoint : NSObject
{
    _Bool _isApplePersonalHotspot;	// 8 = 0x8
    int _rssi;	// 12 = 0xc
    int _mode;	// 16 = 0x10
    int _channel;	// 20 = 0x14
    unsigned long long _macAddress;	// 24 = 0x18
    NSString *_ssid;	// 32 = 0x20
    double _age;	// 40 = 0x28
    double _timestamp;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d065f
@property(readonly, nonatomic) _Bool isApplePersonalHotspot; // @synthesize isApplePersonalHotspot=_isApplePersonalHotspot;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) double age; // @synthesize age=_age;
@property(readonly, nonatomic) int channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, nonatomic) unsigned long long macAddress; // @synthesize macAddress=_macAddress;
- (id)description;	// IMP=0x00100000001d0b88
- (id)jsonObject;	// IMP=0x00100000001d0991
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d08b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d07a3
- (void)dealloc;	// IMP=0x00100000001d0768
- (id)initWithAccessPoint:(struct AccessPoint)arg1;	// IMP=0x00100000001d0667

@end

