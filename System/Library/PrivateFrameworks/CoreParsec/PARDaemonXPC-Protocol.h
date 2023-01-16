//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSNumber, NSString, PARRequest, PARSessionConfiguration, PARSmartSearchV1Parameters, PARSmartSearchV2Parameters, PARSubscriptionChannel;

@protocol PARDaemonXPC <NSObject>
- (void)subscriptionStatusForChannel:(PARSubscriptionChannel *)arg1 reply:(void (^)(PARSubscriptionStatus *, NSError *))arg2;
- (void)unsubscribeFromChannel:(PARSubscriptionChannel *)arg1 reply:(void (^)(PARSubscriptionStatus *, NSError *))arg2;
- (void)subscribeToChannel:(PARSubscriptionChannel *)arg1 reply:(void (^)(PARSubscriptionStatus *, NSError *))arg2;
- (void)getImageMap:(void (^)(NSDictionary *))arg1;
- (void)updateParametersForSmartSearchV1:(PARSmartSearchV1Parameters *)arg1 smartSearchV2:(PARSmartSearchV2Parameters *)arg2;
- (void)clearEncodedEngagedResults:(NSArray *)arg1 withConfiguration:(PARSessionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)topEncodedEngagedResultsForInput:(NSString *)arg1 maxCount:(long long)arg2 withConfiguration:(PARSessionConfiguration *)arg3 completion:(void (^)(NSArray *))arg4;
- (void)addEncodedEngagedResults:(NSArray *)arg1 withConfiguration:(PARSessionConfiguration *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addEncodedEngagedResults:(NSArray *)arg1 withConfiguration:(PARSessionConfiguration *)arg2;
- (void)clearEngagementsWithTitle:(NSString *)arg1 type:(NSNumber *)arg2;
- (void)clearEngagementsFromDate:(NSDate *)arg1 toDate:(NSDate *)arg2;
- (void)fileHandleForWritingFeedbackType:(long long)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)fileHandleAndAttributesForResource:(NSString *)arg1 completion:(void (^)(NSFileHandle *, NSDictionary *, NSError *))arg2;
- (void)listSessions:(void (^)(NSArray *))arg1;
- (void)stopSessions:(void (^)(NSError *))arg1;
- (void)teeFeedback:(void (^)(NSError *))arg1;
- (void)reportFeedback:(PARSessionConfiguration *)arg1 payloadData:(NSData *)arg2 queryId:(unsigned long long)arg3;
- (void)request:(PARSessionConfiguration *)arg1 request:(PARRequest *)arg2 reply:(void (^)(unsigned long long, PARReply *, NSError *))arg3;
- (void)forceFetchBag:(PARSessionConfiguration *)arg1 reply:(void (^)(PARBag *, NSError *))arg2;
- (void)bag:(PARSessionConfiguration *)arg1 reply:(void (^)(PARBag *, NSError *))arg2;
@end
