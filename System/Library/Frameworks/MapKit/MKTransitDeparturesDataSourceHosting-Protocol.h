//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOAttribution, GEOMapServiceTraits, MKMapItem, MKTableViewCell, MKTransitDeparturesDataSource, NSArray, UIColor;
@protocol GEOTransitConnectionInfo, GEOTransitDepartureSequence, MKTransitLineMarker;

@protocol MKTransitDeparturesDataSourceHosting <NSObject>
- (void)transitDeparturesDataSourceDidReload:(MKTransitDeparturesDataSource *)arg1;
- (GEOMapServiceTraits *)traitsForTransitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1;

@optional
- (void)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 didSelectAttribution:(GEOAttribution *)arg2;
- (void)transitDeparturesDataSourceDidToggleHiddenSystem:(MKTransitDeparturesDataSource *)arg1;
- (_Bool)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitStationMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 transitStationMapItem:(MKMapItem *)arg3 transitLine:(id <MKTransitLineMarker>)arg4 fromCell:(MKTableViewCell *)arg5;
- (void)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2 fromCell:(MKTableViewCell *)arg3;
- (void)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 showIncidents:(NSArray *)arg2;
- (void)transitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1 didSelectConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (UIColor *)separatorColorForTransitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1;
- (struct UIEdgeInsets)separatorInsetsForTransitDeparturesDataSource:(MKTransitDeparturesDataSource *)arg1;
@end

