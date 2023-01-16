//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICMusicSubscriptionLeasePlaybackRequest, ICMusicSubscriptionLeaseSession, ICMusicSubscriptionPlaybackResponse, NSArray, NSError;

@protocol ICMusicSubscriptionLeaseSessionDelegate <NSObject>
- (void)musicLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 requestsFairPlayKeyStatusUpdateWithCompletion:(void (^)(ICMusicSubscriptionLeaseStatus *, NSError *))arg2;
- (void)musicLeaseSession:(ICMusicSubscriptionLeaseSession *)arg1 didFinishPlaybackRequest:(ICMusicSubscriptionLeasePlaybackRequest *)arg2 withPlaybackResponse:(ICMusicSubscriptionPlaybackResponse *)arg3 responseError:(NSError *)arg4 updatedFairPlayKeyStatusList:(NSArray *)arg5 completionHandler:(void (^)(ICMusicSubscriptionLeaseStatus *, NSDate *))arg6;
@end

