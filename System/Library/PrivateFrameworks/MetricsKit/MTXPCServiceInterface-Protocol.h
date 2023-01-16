//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTIDScheme, NSArray, NSDictionary;

@protocol MTXPCServiceInterface <NSObject>
- (void)syncForSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)doClearLocalData;
- (oneway void)doMaintainSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (void)doResetSchemes:(NSArray *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)secretForScheme:(MTIDScheme *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(MTIDSecret *, NSError *))arg3;
@end

