//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOMapServiceTraits, PBRequest;
@protocol GEOServiceRequestConfiguring, GEOServiceRequesterOperation;

@protocol GEOServiceRequesterOperation
- (void)cancel;
- (void)start;
- (id <GEOServiceRequesterOperation>)initWithRequest:(PBRequest *)arg1 traits:(GEOMapServiceTraits *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 config:(id <GEOServiceRequestConfiguring>)arg4 throttleToken:(GEODataRequestThrottlerToken *)arg5 willSendRequestHandler:(void (^)(void (^)(PBRequest *)))arg6 validationHandler:(NSError * (^)(PBCodable *))arg7 completionHandler:(void (^)(PBCodable *, NSError *))arg8;
@end

