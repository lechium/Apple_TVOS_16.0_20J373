//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCProfile;

@interface MCDNSSettingsPayloadHandler
{
    MCProfile *_profile;	// 32 = 0x20
}

+ (id)internalErrorWithUnderlyingError:(id)arg1;	// IMP=0x004000000007b258
+ (id)internalError;	// IMP=0x001000000007b244
- (void);	// IMP=0x002000000007b317
- (void)remove;	// IMP=0x001000000007b311
- (void)unsetAside;	// IMP=0x001000000007b30b
- (void)setAside;	// IMP=0x001000000007b305
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007b2fd
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000007b1b5

@end

