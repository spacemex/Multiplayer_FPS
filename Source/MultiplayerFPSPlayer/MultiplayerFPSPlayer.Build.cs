using UnrealBuildTool;

public class MultiplayerFPSPlayer : ModuleRules
{
    public MultiplayerFPSPlayer(ReadOnlyTargetRules target) : base(target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            [
                "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "MultiplayerFPSCore"
            ]
        );

        PrivateDependencyModuleNames.AddRange([]);
    }
}