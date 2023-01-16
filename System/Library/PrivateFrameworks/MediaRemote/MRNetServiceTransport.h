//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MRExternalDeviceTransport.h"

@class MRDeviceInfo, NSNetService;

__attribute__((visibility("hidden")))
@interface MRNetServiceTransport : MRExternalDeviceTransport
{
    MRDeviceInfo *_deviceInfo;	// 16 = 0x10
    _Bool _requiresCustomPairing;	// 24 = 0x18
    NSNetService *_netService;	// 32 = 0x20
}

+ (id)createDeviceInfoFromTXTRecord:(id)arg1;	// IMP=0x00600000000de6a5
+ (id)createDeviceInfoFromNetService:(id)arg1;	// IMP=0x00600000000de577
- (void).cxx_destruct;	// IMP=0x00000000000dee7a
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property(nonatomic) _Bool requiresCustomPairing;
- (void)resetWithError:(id)arg1;	// IMP=0x00000000000dee43
- (_Bool)getInputStream:(id *)arg1 outputStream:(id *)arg2 userInfo:(id)arg3;	// IMP=0x00000000000dedbf
- (id)createConnectionWithUserInfo:(id)arg1;	// IMP=0x00000000000ded15
- (id)error;	// IMP=0x00000000000ded0d
- (void)setShouldUseSystemAuthenticationPrompt:(_Bool)arg1;	// IMP=0x00000000000ded07
- (_Bool)shouldUseSystemAuthenticationPrompt;	// IMP=0x00000000000decff
- (long long)connectionType;	// IMP=0x00000000000decf4
- (long long)port;	// IMP=0x00000000000decd7
- (id)hostname;	// IMP=0x00000000000decba
- (id)name;	// IMP=0x00000000000dec9d
- (id)deviceInfo;	// IMP=0x00000000000dec3d
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;	// IMP=0x00000000000deb06
- (id)description;	// IMP=0x00000000000de3e9
- (void)dealloc;	// IMP=0x00000000000de3a9
- (id)initWithNetService:(id)arg1;	// IMP=0x00000000000de330

@end
