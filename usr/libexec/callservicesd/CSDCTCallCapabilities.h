//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSDCTCallCapabilities : NSObject
{
    _Bool _csCallingAvailable;	// 8 = 0x8
    _Bool _voLTECallingAvailable;	// 9 = 0x9
    _Bool _wiFiCallingAvailable;	// 10 = 0xa
    _Bool _wiFiEmergencyCallingAllowed;	// 11 = 0xb
    _Bool _wiFiEmergencyCallingAvailable;	// 12 = 0xc
}

+ (id)callCapabilitiesForCallManagementStateInfo:(id)arg1;	// IMP=0x004000000006ce2c
+ (id)callCapabilitiesForCTCallCapabilities:(id)arg1;	// IMP=0x001000000006cd4e
@property(nonatomic, getter=isWiFiEmergencyCallingAvailable) _Bool wiFiEmergencyCallingAvailable; // @synthesize wiFiEmergencyCallingAvailable=_wiFiEmergencyCallingAvailable;
@property(nonatomic, getter=isWiFiEmergencyCallingAllowed) _Bool wiFiEmergencyCallingAllowed; // @synthesize wiFiEmergencyCallingAllowed=_wiFiEmergencyCallingAllowed;
@property(nonatomic, getter=isWiFiCallingAvailable) _Bool wiFiCallingAvailable; // @synthesize wiFiCallingAvailable=_wiFiCallingAvailable;
@property(nonatomic, getter=isVoLTECallingAvailable) _Bool voLTECallingAvailable; // @synthesize voLTECallingAvailable=_voLTECallingAvailable;
@property(nonatomic, getter=isCSCallingAvailable) _Bool csCallingAvailable; // @synthesize csCallingAvailable=_csCallingAvailable;
- (id)debugDescription;	// IMP=0x001000000006d09d
- (id)description;	// IMP=0x001000000006d08b

@end

