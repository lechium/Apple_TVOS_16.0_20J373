//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol PBSOSUpdateServiceDelegate <NSObject>
- (void)osUpdateServiceDidFinishApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateApplyProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartApplyWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartRedownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidFinishDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidUpdateDownloadProgressWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartDownloadWithData:(NSDictionary *)arg1;
- (void)osUpdateServiceDidStartCheckWithData:(NSDictionary *)arg1;
@end

