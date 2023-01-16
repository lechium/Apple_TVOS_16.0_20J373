//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSString, SGMailHeaders, SGMailIntelligenceWarning;

@protocol SGDSuggestManagerMailProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forStringFromFollowUpWarning:(NSString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forNSDataFromFollowUpWarning:(NSData *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)reportValue:(_Bool)arg1 forFeatureSetting:(long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)reportUserEngagement:(_Bool)arg1 forWarning:(SGMailIntelligenceWarning *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)identifyComposeWarningsFromSubject:(NSString *)arg1 content:(NSString *)arg2 attributes:(NSDictionary *)arg3 toRecipients:(NSArray *)arg4 ccRecipients:(NSArray *)arg5 bccRecipients:(NSArray *)arg6 originalToRecipients:(NSArray *)arg7 originalCcRecipients:(NSArray *)arg8 attachments:(NSArray *)arg9 withCompletion:(void (^)(SGXPCResponse1 *))arg10;
- (void)identifyComposeWarningsFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 toRecipients:(NSArray *)arg3 ccRecipients:(NSArray *)arg4 bccRecipients:(NSArray *)arg5 originalToRecipients:(NSArray *)arg6 originalCcRecipients:(NSArray *)arg7 attachments:(NSArray *)arg8 withCompletion:(void (^)(SGXPCResponse1 *))arg9;
- (void)identifyWarningsFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 toRecipients:(NSArray *)arg3 ccRecipients:(NSArray *)arg4 bccRecipients:(NSArray *)arg5 originalToRecipients:(NSArray *)arg6 originalCcRecipients:(NSArray *)arg7 attachments:(NSArray *)arg8 withCompletion:(void (^)(SGXPCResponse1 *))arg9;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 limit:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(NSArray *)arg2 withCompletion:(void (^)(SGXPCResponse *))arg3;
- (void)identifyFollowUpWarningFromSubject:(NSString *)arg1 body:(NSString *)arg2 date:(NSDate *)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)identifyFollowUpWarningFromSubject:(NSString *)arg1 content:(NSAttributedString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)lastFollowUpWarningResultsWithLimit:(unsigned long long)arg1 includingResultsFromPreviousCall:(_Bool)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)sortedSaliencyResultsRestrictedToMailboxTypes:(NSArray *)arg1 mailboxIds:(NSArray *)arg2 receivedOnOrAfter:(NSDate *)arg3 ascending:(_Bool)arg4 limit:(unsigned long long)arg5 withCompletion:(void (^)(SGXPCResponse1 *))arg6;
- (void)topSalienciesForMailboxId:(NSString *)arg1 limit:(long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)saliencyFromEmailHeaders:(SGMailHeaders *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)saliencyFromRFC822Data:(NSData *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(SGXPCResponse *))arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(SGXPCResponse *))arg3;
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 completion:(void (^)(SGXPCResponse *))arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(SGXPCResponse1 *))arg1;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)prepareForRealtimeExtraction:(void (^)(SGXPCResponse *))arg1;
@end

