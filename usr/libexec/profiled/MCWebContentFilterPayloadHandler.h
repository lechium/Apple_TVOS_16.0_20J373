//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCWebContentFilterPayloadHandler
{
}

+ (id)internalErrorWithUnderlyingError:(id)arg1;	// IMP=0x004000000007e221
+ (id)internalError;	// IMP=0x001000000007e20d
- (void)remove;	// IMP=0x004000000007e56c
- (void)unsetAside;	// IMP=0x001000000007e4e1
- (void)setAside;	// IMP=0x001000000007e456
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007e2c6
- (void)_removeDependency;	// IMP=0x001000000007e10e
- (void)_installDependency;	// IMP=0x001000000007e00f

@end

