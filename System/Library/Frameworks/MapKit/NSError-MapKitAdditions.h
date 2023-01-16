//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSURL;

@interface NSError (MapKitAdditions)
+ (id)_errorWithExtensionServiceError:(long long)arg1;	// IMP=0x002000000017e495
@property(readonly, retain, nonatomic) NSURL *_mapkit_locationErrorSettingsURL;
@property(readonly, nonatomic, getter=_mapkit_isCLErrorNetwork) _Bool _mapkit_CLErrorNetwork;
@property(readonly, nonatomic, getter=_mapkit_isCLHeadingFailure) _Bool _mapkit_CLHeadingFailure;
@property(readonly, nonatomic, getter=_mapkit_isCLLocationUnknown) _Bool _mapkit_CLLocationUnknown;
@property(readonly, nonatomic, getter=_mapkit_isCLDenied) _Bool _mapkit_CLDenied;
- (id)_mapkit_error;	// IMP=0x00100000000ddad4
- (id)_mapkit_transitIncident;	// IMP=0x00100000000de6f8
- (long long)_mapkit_underlyingGEOError;	// IMP=0x00100000000de676
- (_Bool)_mapkit_isLocationAuthorizationError;	// IMP=0x00100000000de5f8
- (long long)_mapkit_directionsErrorCode;	// IMP=0x00100000000de576
- (_Bool)_mapkit_isDirectionsError;	// IMP=0x00100000000de50c
- (id)_mapkit_errorWithDirectionsError:(id)arg1;	// IMP=0x00100000000ddcc8
@end

