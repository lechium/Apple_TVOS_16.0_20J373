//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation
{
    SoftwareProperties *_softwareProperties;	// 96 = 0x60
}

- (_Bool)_verifyApplication:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000b62a5
- (id)_newInstallationOptions;	// IMP=0x00100000000b5e07
- (_Bool)_installPackage:(id *)arg1;	// IMP=0x00100000000b5dd5
- (void)run;	// IMP=0x00100000000b5ce0
@property(readonly) SoftwareProperties *softwareProperties;
- (void)dealloc;	// IMP=0x00100000000b5c79
- (id)initWithSoftwareProperties:(id)arg1;	// IMP=0x00100000000b5c1b

@end

