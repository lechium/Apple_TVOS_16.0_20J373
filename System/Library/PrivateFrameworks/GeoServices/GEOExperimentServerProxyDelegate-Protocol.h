//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOABAssignmentResponse;
@protocol GEOExperimentServerProxy;

@protocol GEOExperimentServerProxyDelegate <NSObject>
- (void)serverProxy:(id <GEOExperimentServerProxy>)arg1 didChangeExperimentsInfo:(GEOABAssignmentResponse *)arg2;
@end

