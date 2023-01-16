//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODirectionsError, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface MNDirectionsResponseInfo : NSObject
{
    NSArray *_routeInfos;	// 8 = 0x8
    GEODirectionsRequest *_request;	// 16 = 0x10
    GEODirectionsResponse *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    GEODirectionsError *_directionsError;	// 40 = 0x28
    MNTraceRecordingData *_traceRecordingData;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009cd78
- (void).cxx_destruct;	// IMP=0x000000000009d0ca
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(retain, nonatomic) GEODirectionsError *directionsError; // @synthesize directionsError=_directionsError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSArray *routeInfos; // @synthesize routeInfos=_routeInfos;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009cf6b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009cd80

@end

