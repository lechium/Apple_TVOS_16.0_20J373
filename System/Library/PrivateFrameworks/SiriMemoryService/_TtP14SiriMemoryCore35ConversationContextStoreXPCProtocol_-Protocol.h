//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSString;

@protocol _TtP14SiriMemoryCore35ConversationContextStoreXPCProtocol_
- (void)removeWithKey:(NSString *)arg1 for:(NSString *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)queryWithKeys:(NSArray *)arg1 for:(NSString *)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)donateWithData:(NSData *)arg1 key:(NSString *)arg2 for:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
@end

