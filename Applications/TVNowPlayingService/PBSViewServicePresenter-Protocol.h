//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MISSING_TYPE, NSDictionary, NSXPCInterface;

@protocol PBSViewServicePresenter <NSObject>
+ (NSXPCInterface *)_exportedInterface;
- (void)viewServiceEndPresentationWithOptions:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)viewServiceBeginPresentationWithOptions:(NSDictionary *)arg1;

@optional
- (MISSING_TYPE *)viewServiceHandleMessage:reply: /* Error: Ran out of types for this method. */;
- (void)viewServiceUpdatePresentationWithOptions:(NSDictionary *)arg1;
- (void)viewServiceBeginPresentationWithOptions:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
@end

