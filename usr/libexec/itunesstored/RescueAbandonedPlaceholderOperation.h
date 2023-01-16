//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface RescueAbandonedPlaceholderOperation : ISOperation
{
    NSString *_bundleID;	// 96 = 0x60
    CDUnknownBlockType _outputBlock;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000139ef6
- (_Bool)_isRestoreRunning;	// IMP=0x0010000000139eee
- (id)_fetchAppProxyForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000139afb
- (_Bool)_canRescueInstallTypeForBundleID:(id)arg1 proxy:(id)arg2 error:(id *)arg3;	// IMP=0x001000000013979d
- (_Bool)_attemptRescueForBundleID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001393b5
- (void)run;	// IMP=0x0010000000139067
@property(copy, nonatomic) CDUnknownBlockType outputBlock;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000138f04

@end
