//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSAlwaysOnDateSpecifier, NSString;

@protocol BLSEnvironmentDateSpecifying <NSObject>
@property(readonly, copy, nonatomic) NSString *environmentIdentifier;
@property(readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier;
- (NSString *)bls_shortLoggingString;
- (NSString *)bls_loggingString;
@end

