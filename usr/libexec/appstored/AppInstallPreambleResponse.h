//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXAppInstallCoordinator, NSError;

@interface AppInstallPreambleResponse : NSObject
{
    long long _installID;	// 8 = 0x8
    IXAppInstallCoordinator *_coordinator;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    long long _result;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000018df6e

@end

