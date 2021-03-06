/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedSettings : PXSettings {
    float  _additionalContentThreshold;
    BOOL  _alwaysShowOnboarding;
    int  _dataSourceType;
    BOOL  _disableRoundedOverlays;
    BOOL  _displayContentDuringGraphRebuild;
    BOOL  _forceReloadAfterRefresh;
    unsigned int  _groupsPerBatch;
    double  _memoryGroupingInterval;
    int  _memoryGroupingMethod;
    BOOL  _useSlowAnimations;
}

@property (nonatomic) float additionalContentThreshold;
@property (nonatomic) BOOL alwaysShowOnboarding;
@property (nonatomic) int dataSourceType;
@property (nonatomic) BOOL disableRoundedOverlays;
@property (nonatomic) BOOL displayContentDuringGraphRebuild;
@property (nonatomic) BOOL forceReloadAfterRefresh;
@property (nonatomic) unsigned int groupsPerBatch;
@property (nonatomic) double memoryGroupingInterval;
@property (nonatomic) int memoryGroupingMethod;
@property (nonatomic) BOOL useSlowAnimations;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (int)_defaultDataSourceType;
- (float)additionalContentThreshold;
- (BOOL)alwaysShowOnboarding;
- (int)dataSourceType;
- (BOOL)disableRoundedOverlays;
- (BOOL)displayContentDuringGraphRebuild;
- (BOOL)forceReloadAfterRefresh;
- (unsigned int)groupsPerBatch;
- (double)memoryGroupingInterval;
- (int)memoryGroupingMethod;
- (void)setAdditionalContentThreshold:(float)arg1;
- (void)setAlwaysShowOnboarding:(BOOL)arg1;
- (void)setDataSourceType:(int)arg1;
- (void)setDefaultValues;
- (void)setDisableRoundedOverlays:(BOOL)arg1;
- (void)setDisplayContentDuringGraphRebuild:(BOOL)arg1;
- (void)setForceReloadAfterRefresh:(BOOL)arg1;
- (void)setGroupsPerBatch:(unsigned int)arg1;
- (void)setMemoryGroupingInterval:(double)arg1;
- (void)setMemoryGroupingMethod:(int)arg1;
- (void)setUseSlowAnimations:(BOOL)arg1;
- (BOOL)useSlowAnimations;

@end
