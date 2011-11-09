/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADLogMetaData, NSMutableArray;

@interface ADLogImpressionRequest : PBRequest  {
    ADLogMetaData *_metaData;
    NSMutableArray *_metrics;
}

@property(readonly) BOOL hasMetaData;
@property(retain) ADLogMetaData * metaData;
@property(retain) NSMutableArray * metrics;

+ (void)initialize;

- (Class)responseClass;
- (BOOL)readFrom:(id)arg1;
- (id)metricAtIndex:(unsigned int)arg1;
- (void)addMetric:(id)arg1;
- (void)setMetrics:(id)arg1;
- (BOOL)hasMetaData;
- (void)setMetaData:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (unsigned int)metricsCount;
- (id)metaData;
- (id)dictionaryRepresentation;
- (id)metrics;
- (id)description;
- (void)dealloc;

@end